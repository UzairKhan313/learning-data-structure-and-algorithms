function fibonacci(n = 3) {
  if (n <= 1) return n;
  console.log("N is here : ", n);

  //   fibonacci(n - 1) + fibonacci(n - 2);
  return fibonacci(n - 1) + fibonacci(n - 2);
}

console.log(fibonacci());
// fibonacci();
