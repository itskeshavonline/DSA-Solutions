# Greater Average

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM?tab=statement)

## Solved On
10 Oct 2026 at 07:04 am

<p>You are given <code>3</code> numbers <code>A</code>, <code>B</code>, and <code>C</code>.</p>

<p>Determine whether the average of <code>A</code> and <code>B</code> is strictly greater than <code>C</code> or not?</p>

<p><strong>Note:</strong> Average of <code>A</code> and <code>B</code> is defined as <code>(A + B) / 2</code>. For example, average of <code>5</code> and <code>9</code> is <code>7</code>, average of <code>5</code> and <code>8</code> is <code>6.5</code>.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line of input will contain a single integer <code>T</code>, denoting the number of test cases.</p>
<p>Each test case consists of <code>3</code> integers <code>A</code>, <code>B</code>, and <code>C</code>.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output <code>YES</code> if average of <code>A</code> and <code>B</code> is strictly greater than <code>C</code>, <code>NO</code> otherwise.</p>
<p>You may print each character of the string in uppercase or lowercase (for example, the strings <code>YeS</code>, <code>yEs</code>, <code>yes</code> and <code>YES</code> will all be treated as identical).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
5
5 9 6
5 8 6
5 7 6
4 9 8
3 7 2
<strong>Output:</strong>
YES
YES
NO
NO
YES
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test case 1:</strong> The average value of <code>5</code> and <code>9</code> is <code>7</code> which is strictly greater than <code>6</code>.</p>
<p><strong>Test case 2:</strong> The average value of <code>5</code> and <code>8</code> is <code>6.5</code> which is strictly greater than <code>6</code>.</p>
<p><strong>Test case 3:</strong> The average value of <code>5</code> and <code>7</code> is <code>6</code> which is not strictly greater than <code>6</code>.</p>
<p><strong>Test case 4:</strong> The average value of <code>4</code> and <code>9</code> is <code>6.5</code> which is not strictly greater than <code>8</code>.</p>
<p><strong>Test case 5:</strong> The average value of <code>3</code> and <code>7</code> is <code>5</code> which is strictly greater than <code>2</code>.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 1000</code></li>
	<li><code>1 &lt;= A, B, C &lt;= 10</code></li>
</ul>

## My Notes / Approach:
