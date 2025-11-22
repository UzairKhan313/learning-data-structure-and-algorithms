// Print pattern form n to 1 and 1 to n.
// Example n=4
// output 4 3 2 1 1 2 3 4

function printPattern(n) {
  if (n == 0) return;
  console.log(n);
  printPattern(n - 1);
  console.log(n);
}

printPattern(3);
