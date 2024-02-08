import { sumOfArray } from "./lib";

const myNumStr = (2n ** 1000n).toString();
const numArr = myNumStr.split("").map((n) => parseInt(n));

console.log(sumOfArray(numArr));
// 1366

export {};
