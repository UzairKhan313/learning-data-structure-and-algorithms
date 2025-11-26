let n = 4;

for (let i = 1; i <= n; i++) {
  for (let j = 0; j < i; j++) {
    // console.log("*");
    process.stdout.write("* ");
  }
  console.log("\n");
}
