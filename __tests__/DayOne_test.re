open Jest;
open Expect;
open DayOne;

/*
 For example:

 For a mass of 12, divide by 3 and round down to get 4, then subtract 2 to get 2.
 For a mass of 14, dividing by 3 and rounding down still yields 4, so the fuel required is also 2.
 For a mass of 1969, the fuel required is 654.
 For a mass of 100756, the fuel required is 33583.
  */

describe("Day One - Part One", () => {
  test("Example One", () =>
    expect(calcFuelReq(12)) |> toBe(2)
  );

  test("Example Two", () =>
    expect(calcFuelReq(14)) |> toBe(2)
  );

  test("Example Three", () =>
    expect(calcFuelReq(1969)) |> toBe(654)
  );

  test("Example Four", () =>
    expect(calcFuelReq(100756)) |> toBe(33583)
  );
});

describe("Day One - Part Two", () => {
  test("Example One", () =>
    expect(calcFuelReqRecursive(12)) |> toBe(2)
  );
  test("Example Two", () =>
    expect(calcFuelReqRecursive(14)) |> toBe(2)
  );
  test("Example Three", () =>
    expect(calcFuelReqRecursive(1969)) |> toBe(966)
  );
  test("Example Four", () =>
    expect(calcFuelReqRecursive(100756)) |> toBe(50346)
  );
});