let n = 4;

// print pattern like
// 1
// 22
// 333
// 4444

console.log("==============> Pattern 2 <=================");

for (let i = 1; i <= n; i++) {
  for (let j = 0; j < i; j++) {
    // console.log("*");
    process.stdout.write(i.toString());
  }
  console.log("\n");
}

// pattern 3
console.log("==============> Pattern 3 <=================");

for (let i = 1; i <= n; i++) {
  for (let j = 0; j < i; j++) {
    // console.log("*");
    process.stdout.write((j + 1).toString() + " ");
  }
  console.log("\n");
}

// pattern 4

console.log("==============> Pattern 4 <=================");

for (let i = 0; i < n; i++) {
  for (let j = i + 1; j > 0; j--) {
    // console.log("*");
    process.stdout.write(j.toString() + " ");
  }
  console.log("\n");
}

console.log("==============> Pattern 5 <=================");

let num = 1;
for (let i = 0; i < n; i++) {
  for (let j = 0; j <= i; j++) {
    // console.log("*");
    process.stdout.write(num.toString() + " ");
    num++;
  }
  console.log("\n");
}
