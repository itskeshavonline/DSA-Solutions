# Chef and String

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/greedy-algorithms/INTGRA01/problems/XYSTR)

## Solved On
30 Sept 2026 at 08:56 pm

<p>There are <code>N</code> students standing in a row and numbered <code>1</code> through <code>N</code> from left to right. You are given a string <code>S</code> with length <code>N</code>, where for each valid <code>i</code>, the <code>i<sup>th</sup></code> character of <code>S</code> is <code>'x'</code> if the <code>i<sup>th</sup></code> student is a girl or <code>'y'</code> if this student is a boy. Students standing next to each other in the row are friends.</p>

<p>The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. Two students can only form a pair if they are friends. Each student can only be part of at most one pair. What is the maximum number of pairs that can be formed?</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line of the input contains a single integer <code>T</code> denoting the number of test cases. The description of <code>T</code> test cases follows.</p>
<p>The first and only line of each test case contains a single string <code>S</code>.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, print a single line containing one integer ― the maximum number of pairs.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
3
xy
xyxxy
yy
<strong>Output:</strong>
1
2
0
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Example case 1:</strong> There is only one possible pair: (first student, second student).</p>
<p><strong>Example case 2:</strong> One of the ways to form two pairs is: (first student, second student) and (fourth student, fifth student).<br />
Another way to form two pairs is: (second student, third student) and (fourth student, fifth student).</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>1 &lt;= N &lt;= 10<sup>5</sup></code></li>
	<li><code>|S| = N</code></li>
	<li><code>S</code> contains only characters <code>'x'</code> and <code>'y'</code></li>
	<li>The sum of <code>N</code> over all test cases does not exceed <code>3 * 10<sup>5</sup></code></li>
</ul>

## My Notes / Approach:
Time complexity : O(N)
Space complexity : O(1)

Approach : greedy

difficulty : 1124