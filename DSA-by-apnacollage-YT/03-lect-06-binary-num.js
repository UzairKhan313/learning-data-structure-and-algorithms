// converting decimal to binary
function convertDecimalToBinary(n) {
  let ans = 0;
  let pow = 1;

  while (n > 0) {
    let rem = n % 2;
    n = Math.floor(n / 2);

    ans += rem * pow;
    pow *= 10;
  }
  return ans;
}

// converting binary to decimal
function convertBinaryToDecimal(binaryNum) {
  let ans = 0;
  let pow = 0;
  for (let i = binaryNum.length - 1; i >= 0; i--) {
    let currentNum = binaryNum[i];
    if (currentNum == 1) {
      ans = ans + Math.pow(2, pow);
    }

    pow++;
  }

  return ans;
}

for (i = 10; i <= 20; i++) {
  console.log(i, " in binary is :", convertDecimalToBinary(i));
}

// binary number from 10 to 20.
let binaryNumbers = [
  "1010",
  "1011",
  "1100",
  "1101",
  "1110",
  "1111",
  "10000",
  "10001",
  "10010",
  "10011",
  "10100",
];

binaryNumbers.forEach((element) => {
  console.log(element, " in Decimal is :", convertBinaryToDecimal(element));
});
