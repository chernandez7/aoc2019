open Jest;
open Expect;
open DayFour;

describe("Day Four - Part One", () => {
  test("is always increasing", () => {
    expect(isAlwaysIncreasing(111111)) |> toBe(true);
    expect(isAlwaysIncreasing(123456)) |> toBe(true);
    expect(isAlwaysIncreasing(1289)) |> toBe(true);
    expect(isAlwaysIncreasing(321)) |> toBe(false);
    expect(isAlwaysIncreasing(111110)) |> toBe(false);
  });

  test("has adjacent values", () => {
    expect(hasAdjacentValues(111111)) |> toBe(true);
    expect(hasAdjacentValues(123456)) |> toBe(false);
    expect(hasAdjacentValues(1289)) |> toBe(false);
    expect(hasAdjacentValues(321)) |> toBe(false);
    expect(hasAdjacentValues(111110)) |> toBe(true);
  });

  test("Example One", () =>
    expect(isPasswordValid(111111)) |> toBe(false)
  );

  test("Example Two", () =>
    expect(isPasswordValid(223450)) |> toBe(false)
  );

  test("Example Three", () =>
    expect(isPasswordValid(123789)) |> toBe(false)
  );
});

describe("Day Four - Part Two", () => {
  test("has adjacent values not in groups", () => {
    expect(adjacentNotInGroups(111111)) |> toBe(false);
    expect(adjacentNotInGroups(123456)) |> toBe(true);
    expect(adjacentNotInGroups(1289)) |> toBe(true);
    expect(adjacentNotInGroups(321)) |> toBe(true);
  });

  test("Example One", () => {
    expect(adjacentNotInGroups(112233)) |> toBe(true)
  });

  test("Example Two", () => {
    expect(adjacentNotInGroups(123444)) |> toBe(false)
  });

  test("Example Three", () => {
    expect(adjacentNotInGroups(111122)) |> toBe(true)
  });
});
