let input = [|
  132709,
  102150,
  126463,
  85035,
  77219,
  86458,
  119251,
  121098,
  118730,
  122505,
  127964,
  68004,
  55833,
  77664,
  142865,
  124503,
  115892,
  87236,
  122743,
  127096,
  94893,
  62129,
  56520,
  117000,
  81519,
  121719,
  96291,
  96556,
  79006,
  137122,
  124340,
  125151,
  51603,
  50132,
  67568,
  132599,
  149009,
  60997,
  99382,
  96506,
  57269,
  118133,
  115119,
  126208,
  101098,
  60514,
  146171,
  70314,
  76473,
  51209,
  99190,
  57647,
  126985,
  142055,
  99615,
  146442,
  129520,
  145334,
  57799,
  87148,
  118362,
  80407,
  106449,
  57146,
  129035,
  60156,
  120016,
  147383,
  68819,
  83868,
  81021,
  131594,
  137692,
  86537,
  110709,
  127678,
  106849,
  137640,
  108482,
  131412,
  70331,
  90118,
  117557,
  117347,
  84688,
  108869,
  145359,
  127024,
  100976,
  90419,
  53362,
  106100,
  129474,
  56101,
  99975,
  79211,
  99865,
  121099,
  74511,
  123172,
|];

// https://adventofcode.com/2019/day/1

let calcFuelReq = m => {
  let m2 = m / 3;
  let roundedM = floor(float_of_int(m2));
  int_of_float(roundedM) - 2;
};

let calcFuelReqRecursive = m => {
  let totalCost = ref(0);
  let cost = ref(calcFuelReq(m));
  totalCost := totalCost^ + calcFuelReq(m);

  while (calcFuelReq(cost.contents) > 0) {
    totalCost := totalCost^ + calcFuelReq(cost.contents);
    cost := calcFuelReq(cost.contents);
  };
  totalCost.contents;
};

let sum = ref(0);

Array.map(
  i => {
    // Uncomment for part one answer (but not both)
    // sum := sum^ + calcFuelReq(i);

    // Uncomment for part two answer (but not both)
    sum := sum^ + calcFuelReqRecursive(i);

    ();
  },
  input,
);

// Answer
// Js.log(sum.contents);
