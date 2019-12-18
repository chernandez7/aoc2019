let min = 197487;
let max = 673251;

type pwd = int;

let isAlwaysIncreasing = (p: pwd): bool => {
  let value = ref(true);
  let notDone = ref(true);
  let prev = ref(0);
  let stringP = string_of_int(p);

  while (value.contents && notDone.contents) {
    for (c in 0 to String.length(stringP) - 1) {
      let num = int_of_string(String.sub(stringP, c, 1));

      if (num < prev.contents) {
        value := false;
      };
      prev := num;
    };
    notDone := false;
  };
  value.contents;
};

let hasAdjacentValues = (p: pwd) => {
  true;
};

let isPasswordValid = (p: pwd) => {
  String.length(string_of_int(p)) === 6
  && isAlwaysIncreasing(p)
  && hasAdjacentValues(p)
  && min <= p
  && p <= max;
};
