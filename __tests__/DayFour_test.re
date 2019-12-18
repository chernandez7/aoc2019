open Jest;
open Expect;
open DayFour;

describe("Day Four - Part One", () => {
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
