# Watson asks Does Permutation Exist

## Difficulty: Medium

## Platform: CodeChef

## Problem Link
[View Problem](https://www.codechef.com/practice/course/greedy-algorithms/INTGRA01/problems/PERMEXIS)

## Solved On
30 Sept 2026 at 04:59 pm

<p>Watson gives an array <code>A</code> of <code>N</code> integers <code>A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub></code> to Sherlock. He wants Sherlock to reorganize the array in a way such that no two adjacent numbers differ by more than <code>1</code>.</p>

<p>Formally, if the reorganized array is <code>B<sub>1</sub>, B<sub>2</sub>, ..., B<sub>N</sub></code>, then the condition <code>|B<sub>i</sub> - B<sub>i+1</sub>| &lt;= 1</code>, for all <code>1 &lt;= i &lt; N</code> (where <code>|x|</code> denotes the absolute value of <code>x</code>) should be met.</p>

<p>Sherlock is not sure that a solution exists, so he asks you.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>First line contains <code>T</code>, number of test cases. Each test case consists of <code>N</code> in one line followed by <code>N</code> integers in next line denoting <code>A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub></code>.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output in one line <code>YES</code> or <code>NO</code> denoting if array <code>A</code> can be reorganized in required way or not.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
2
4
3 2 2 3
2
1 5
<strong>Output:</strong>
YES
NO
<strong>Explanation:</strong>
Test case 1:
No need to reorganise.

Test case 2:
No possible way.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>1 &lt;= N &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= A<sub>i</sub> &lt;= 10<sup>9</sup></code></li>
	<li>Sum of <code>N</code> over all test cases <code>&lt;= 2 * 10<sup>5</sup></code></li>
</ul>

## My Notes / Approach:
time complexity O(n log n)

approach : greedy
