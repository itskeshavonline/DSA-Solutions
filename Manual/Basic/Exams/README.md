# Exams

## Difficulty: Basic

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF)

## Solved On
10 Oct 2026 at 07:44 am

<p>In Chefland, there are <code>X</code> schools, and each school has <code>Y</code> students.</p>

<p>The year end results are in and a total of <code>Z</code> students passed the exams.</p>

<p>Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than <code>50%</code>.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line of input will contain a single integer <code>T</code>, denoting the number of test cases.</p>
<p>Each test case consists of three space-separated integers <code>X</code>, <code>Y</code>, and <code>Z</code>, as mentioned in the statement.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output on a new line, <code>YES</code>, if the total number of students who passed in Chefland was strictly greater than <code>50%</code>, otherwise print <code>NO</code>.</p>
<p>You may print each character of the string in uppercase or lowercase (for example, the strings <code>YES</code>, <code>yEs</code>, <code>yes</code>, and <code>yeS</code> will all be treated as identical).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
4
2 10 12
2 10 3
1 5 3
3 6 9
<strong>Output:</strong>
YES
NO
YES
NO
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test case 1:</strong> The total number of students appeared were <code>2 * 10 = 20</code>. The number of students passed were <code>12</code>. Thus, number of students who passed are <code>60%</code>, which is strictly greater than <code>50%</code>.</p>
<p><strong>Test case 2:</strong> The total number of students appeared were <code>2 * 10 = 20</code>. The number of students passed were <code>3</code>. Thus, number of students who passed are <code>15%</code>, which is less than <code>50%</code>.</p>
<p><strong>Test case 3:</strong> The total number of students appeared were <code>1 * 5 = 5</code>. The number of students passed were <code>3</code>. Thus, number of students who passed are <code>60%</code>, which is strictly greater than <code>50%</code>.</p>
<p><strong>Test case 4:</strong> The total number of students appeared were <code>3 * 6 = 18</code>. The number of students passed were <code>9</code>. Thus, number of students who passed are <code>50%</code>, which is equal to <code>50%</code>.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= X &lt;= 5</code></li>
	<li><code>1 &lt;= Y &lt;= 50</code></li>
	<li><code>0 &lt;= Z &lt;= X * Y</code></li>
</ul>

## My Notes / Approach:
DIFFICULTY - 519 CodeChef