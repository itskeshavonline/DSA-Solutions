# CRED Coins

## Difficulty: Basic

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS?tab=Help)

## Solved On
12 Oct 2026 at 04:51 am

<p>For each bill you pay using CRED, you earn <code>X</code> CRED coins.</p>

<p>At CodeChef store, each bag is worth <code>100</code> CRED coins.</p>

<p>Chef pays <code>Y</code> number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line will contain <code>T</code>, number of test cases. Then the test cases follow.</p>
<p>Each test case consists of a single line of input, two integers <code>X</code> and <code>Y</code>.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output in a single line — the maximum number of bags Chef can get from the CodeChef store.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
3
10 10
20 4
70 7
<strong>Output:</strong>
1
0
4
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test Case 1:</strong> For each bill payment, one receives <code>10</code> CRED coins. Chef pays <code>10</code> bills using CRED. Thus, he receives <code>100</code> CRED coins. Chef can get <code>1</code> bag from the CodeChef store using these coins.</p>
<p><strong>Test Case 2:</strong> For each bill payment, one receives <code>20</code> CRED coins. Chef pays <code>4</code> bills using CRED. Thus, he receives <code>80</code> CRED coins. Chef cannot get any bag from the CodeChef store using these coins.</p>
<p><strong>Test Case 3:</strong> For each bill payment, one receives <code>70</code> CRED coins. Chef pays <code>7</code> bills using CRED. Thus, he receives <code>490</code> CRED coins. Chef can get at most <code>4</code> bags from the CodeChef store using these coins.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>1 &lt;= X, Y &lt;= 1000</code></li>
</ul>

## My Notes / Approach:
difficulty - 539