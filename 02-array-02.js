// An array is monotonic if it is either monotone increasing or monotone decreasing. An array is monotone increasing if all its elements from left to right are non-decreasing. An array is monotone decreasing if all its elements from left to right are non-increasing. Given an integer array, return true if the given array is monotonic, or false otherwise.


function checkMonotone(array) {
  if (array.length === 0 || array.length === 1) return true // an Empty array and array with single element is montone.

  const firstElement = array[0];
  const lastElement = array[array.length - 1]



  if (firstElement === lastElement) {
    for (let i = 0; i < array.length - 1; i++) {
      if (array[i] !== array[i + 1]) return false

    }

  }
  else if (firstElement < lastElement) {
    for (let i = 0; i < array.length - 1; i++) {
      if (array[i] > array[i + 1]) return false
    }
  }
  else {
    // firstElement > lastElement
    for (let i = 0; i < array.length - 1; i++) {
      if (array[i] < array[i + 1]) {
        return false
      }
    }
  }

  return true
}

console.log(checkMonotone([1, 2, 3, 4, 5]));
console.log(checkMonotone([1, 2, 2, 3, 4, 5]));
console.log(checkMonotone([5, 4, 3, 2, 2, 1]));
console.log(checkMonotone([5, 4, 3, 4, 5, 2, 2, 1]));
