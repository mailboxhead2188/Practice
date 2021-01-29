import * as readLine from 'readline';

import { AddNumbers } from './hello';
import { MultiplyNumbers } from './hello';


var additionResult: number;
var multiplicationResult: number;
var x: number;
var y: number;

x = 5;
y = 6;

additionResult = AddNumbers(x, y);
multiplicationResult = MultiplyNumbers(x, y);

console.log("Addition results: ", additionResult);
console.log("Multiplication results: ", multiplicationResult);