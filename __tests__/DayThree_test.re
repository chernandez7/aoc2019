open Jest;
open Expect;
open DayThree;

describe("Day Three - Part One", () => {
  test("parsing inputs", () => {
    let ex = "R75,D30,R83,U83,L12,D49,R71,U7,L72
U62,R66,U55,R34,D71,R55,D58,R83";
    expect(parseInput(ex))
    |> toEqual((
         [|"R75", "D30", "R83", "U83", "L12", "D49", "R71", "U7", "L72"|],
         [|"U62", "R66", "U55", "R34", "D71", "R55", "D58", "R83"|],
       ));
  });
  test("simulate paths", () => {
    let ex = [|"R2", "D4", "R1", "U2", "L4"|];
    let path = [|
      {x: 0, y: 0},
      {x: 1, y: 0},
      {x: 2, y: 0},
      {x: 2, y: 0},
      {x: 2, y: (-1)},
      {x: 2, y: (-2)},
      {x: 2, y: (-3)},
      {x: 2, y: (-4)},
      {x: 2, y: (-4)},
      {x: 3, y: (-4)},
      {x: 3, y: (-4)},
      {x: 3, y: (-3)},
      {x: 3, y: (-2)},
      {x: 3, y: (-2)},
      {x: 2, y: (-2)},
      {x: 1, y: (-2)},
      {x: 0, y: (-2)},
      {x: (-1), y: (-2)},
    |];
    expect(simulatePath(~path=ex)) |> toEqual(path);
  });

  test("find intersections", () => {
    let ex = [|
      {x: 0, y: 0},
      {x: 1, y: 0},
      {x: 2, y: 0},
      {x: 2, y: (-4)},
      {x: 3, y: (-4)},
      {x: 3, y: (-4)},
      {x: 3, y: (-3)},
      {x: 3, y: (-2)},
    |];
    let ex2 = [|{x: 3, y: (-2)}|];

    expect(findIntersections(~first=ex, ~second=ex2)) |> toEqual(ex2);
  });

  test("calc manhattan distance", () => {
    let ex = [|{x: 4, y: 3}|];
    expect(getShortestManhattanDist(~collisions=ex)) |> toEqual(7);
  });

  test("Example One", () => {
    let ex = "R75,D30,R83,U83,L12,D49,R71,U7,L72
U62,R66,U55,R34,D71,R55,D58,R83";
    expect(getClosestDistance(ex)) |> toEqual(159);
  });
  test("Example Two", () => {
    let ex = "R98,U47,R26,D63,R33,U87,L62,D20,R33,U53,R51
U98,R91,D20,R16,D67,R40,U7,R15,U6,R7";
    expect(getClosestDistance(ex)) |> toEqual(135);
  });

  test("Example Three", () => {
    let ex = "R8,U5,L5,D3
U7,R6,D4,L4";
    expect(getClosestDistance(ex)) |> toEqual(6);
  });
});
