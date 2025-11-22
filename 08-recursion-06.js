// There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.  The rules of the game are as follows:  Start at the 1st friend. Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once. The last friend you counted leaves the circle and loses the game. If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat. Else, the last friend in the circle wins the game. Given the number of friends, n, and an integer k, return the winner of the game.

// Approach 1: Recursive Solution with time complexity O(n**2) and space complexity O(n)
function findTheWinnerWithApproachOne(n, k) {
  let arr = Array.from({ length: n }, (_, i) => i + 1);

  const helper = (arr, startIndex) => {
    if (arr.length === 1) return arr[0];
    const removeIndex = (startIndex + k - 1) % arr.length;
    arr.splice(removeIndex, 1);
    return helper(arr, removeIndex);
  };

  return helper(arr, 0);
}

// Approach 2: Recursive Solution with time complexity O(n) and space complexity O(n)
function findTheWinnerWithApproachTwo(n, k) {
  //Write code here

  function josephus(n) {
    if (n === 1) {
      return 0;
    }
    // Recursive case
    return (josephus(n - 1) + k) % n;
  }

  return josephus(n) + 1;
}

// Approach 3:  Iterative Solution with time complexity O(n) and space complexity O(1)
function findTheWinnerWithApproachThree(n, k) {
  //Write code here
  let survivor = 0;
  for (let i = 2; i <= n; i++) {
    survivor = (survivor + k) % i;
  }
  return survivor + 1;
}

console.log(
  "Solution with approach one : ",
  findTheWinnerWithApproachOne(5, 2)
); // Expected output : 3

console.log(
  "Solution with approach Two : ",
  findTheWinnerWithApproachTwo(5, 2)
); // Expected output : 3

console.log(
  "Solution with approach Three : ",
  findTheWinnerWithApproachThree(5, 2)
); // Expected output : 3
