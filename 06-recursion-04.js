// find the sum from 1 to n.
function sum(n) {
  if (n === 0) return 0;
  return n + sum(n - 1);
}

// find the sum from n to 1.
function sumDecrease(curr, n) {
  if (curr === n) return n;
  return curr + sumDecrease(curr + 1, n);
}

console.log("Here is Increase sum from 1 to n :", sum(20));

console.log("Here is decrease sum from n to 1 :", sumDecrease(0, 20));
