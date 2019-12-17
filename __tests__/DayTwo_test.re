open Jest;
open Expect;
open DayTwo;

describe("Day Two - Part One", () => {
  test("Example One", () => {
    let intcode = [|1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50|];
    expect(generateFinalIntcode(intcode))
    |> toEqual([|3500, 9, 10, 70, 2, 3, 11, 0, 99, 30, 40, 50|]);
  });

  test("Example Two", () => {
    let intcode = [|1, 0, 0, 0, 99|];
    expect(generateFinalIntcode(intcode)) |> toEqual([|2, 0, 0, 0, 99|]);
  });

  test("Example Three", () => {
    let intcode = [|2, 3, 0, 3, 99|];
    expect(generateFinalIntcode(intcode)) |> toEqual([|2, 3, 0, 6, 99|]);
  });

  test("Example Four", () => {
    let intcode = [|2, 4, 4, 5, 99, 0|];
    expect(generateFinalIntcode(intcode))
    |> toEqual([|2, 4, 4, 5, 99, 9801|]);
  });

  test("Example Five", () => {
    let intcode = [|1, 1, 1, 4, 99, 5, 6, 0, 99|];
    expect(generateFinalIntcode(intcode))
    |> toEqual([|30, 1, 1, 4, 2, 5, 6, 0, 99|]);
  });
});

describe("Day Two - Part Two", () => {
  test("Example One", () => {
    let noun = 59;
    let verb = 36;

    let testingInput = ref(DayTwo.input);

    testingInput.contents[1] = noun;
    testingInput.contents[2] = verb;

    let result = generateFinalIntcode(testingInput.contents);

    expect(result[0]) |> toEqual(19690720);
  })
});
