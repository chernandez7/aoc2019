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

let hasAdjacentValues = (p: pwd): bool => {
  let value = ref(false);
  let notDone = ref(true);
  let prev = ref(0);
  let stringP = string_of_int(p);

  while (!value.contents && notDone.contents) {
    for (c in 0 to String.length(stringP) - 1) {
      let num = int_of_string(String.sub(stringP, c, 1));

      if (num == prev.contents) {
        value := true;
      };
      prev := num;
    };
    notDone := false;
  };
  value.contents;
};

let isPasswordValid = (p: pwd): bool => {
  String.length(string_of_int(p)) === 6
  && isAlwaysIncreasing(p)
  && hasAdjacentValues(p)
  && min <= p
  && p <= max;
};

// Uncomment for part one answer
/* let validPasswords = ref([||]);

   for (i in min to max) {
     if (isPasswordValid(i)) {
       validPasswords := Array.append(validPasswords.contents, [|i|]);
     };
   };

   Js.log(validPasswords.contents);
   Js.log(Array.length(validPasswords.contents));
    */
