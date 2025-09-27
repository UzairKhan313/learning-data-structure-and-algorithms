//   You are given an array of Integers in which each subsequent value is not less than the previous value. Write a function that takes this array as an input and returns a new array with the squares of each number sorted in ascending order.

// This is solution is fine but its not the optimal.
function sortedSquaredArray(arrayOfInt) {
  //write code here.make sure to return desired array.
  if (arrayOfInt.length === 0) {
    return [];
  }
  let array = [];
  for (i = 0; i < arrayOfInt.length; i++) {
    array.push(arrayOfInt[i] ** 2);
  }
  return array.sort((a, b) => a - b);
}

// This is solution is  optimal.
function sortedSquaredArrayMethod2(arrayOfInt) {
  //write code here.make sure to return desired array.
  if (arrayOfInt.length === 0) {
    return [];
  }
  let newArray = new Array(arrayOfInt.length).fill(0);
  let leftPointer = 0;
  let rightPointer = arrayOfInt.length - 1;
  for (i = arrayOfInt.length - 1; i >= 0; i--) {
    const leftSquared = Math.pow(arrayOfInt[leftPointer], 2);
    const rightSquared = Math.pow(arrayOfInt[rightPointer], 2);

    if (leftSquared > rightSquared) {
      newArray[i] = leftSquared;
      leftPointer++;
    } else {
      newArray[i] = rightSquared;
      rightPointer--;
    }
  }

  return newArray;
}

console.log("Solution is : ", sortedSquaredArrayMethod2([-4, -1, 0, 3, 10]));
