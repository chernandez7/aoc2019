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

  test("getting proper high and low for grid", () => {
    let result =
      calcHighAndLow(
        ~first=[|
          "R75",
          "D30",
          "R83",
          "U83",
          "L12",
          "D49",
          "R71",
          "U7",
          "L72",
        |],
        ~second=[|"U62", "R66", "U55", "R34", "D71", "R55", "D58", "R83"|],
      );
    expect(result) |> toEqual((207, 208));
  });
  /*test("Example One", () => {
        let ex = "R75,D30,R83,U83,L12,D49,R71,U7,L72
    U62,R66,U55,R34,D71,R55,D58,R83";
        expect(getClosestDistance(ex)) |> toEqual(159);
      });
       test("Example Two", () => {
             let ex = "R98,U47,R26,D63,R33,U87,L62,D20,R33,U53,R51
         U98,R91,D20,R16,D67,R40,U7,R15,U6,R7";
             expect(getClosestDistance(ex)) |> toEqual(135);
           }); */
});
