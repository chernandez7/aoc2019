open Jest;
open Expect;
open DayTwo;

describe("Day Two - Part One", () => {
  test("Example One", () => {
    let intcode = [|1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50|];
    expect(generateFinalIntcode(intcode))
    |> toBe([|3500, 9, 10, 70, 2, 3, 11, 0, 99, 30, 40, 50|]);
  });

  test("Example Two", () => {
    let intcode = [|1, 0, 0, 0, 99|];
    expect(generateFinalIntcode(intcode)) |> toBe([|2, 0, 0, 0, 99|]);
  });

  test("Example Three", () => {
    let intcode = [|2, 3, 0, 3, 99|];
    expect(generateFinalIntcode(intcode)) |> toBe([|2, 3, 0, 6, 99|]);
  });

  test("Example Four", () => {
    let intcode = [|2, 4, 4, 5, 99, 0|];
    expect(generateFinalIntcode(intcode)) |> toBe([|2, 4, 4, 5, 99, 9801|]);
  });

  test("Example Five", () => {
    let intcode = [|1, 1, 1, 4, 99, 5, 6, 0, 99|];
    expect(generateFinalIntcode(intcode))
    |> toBe([|30, 1, 1, 4, 2, 5, 6, 0, 99|]);
  });
});
