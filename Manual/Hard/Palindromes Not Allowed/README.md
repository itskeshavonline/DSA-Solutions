# Palindromes Not Allowed

## Difficulty: Hard

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/problems/NOPAL2)

## Solved On
31 Oct 2026 at 05:20 pm

<p>A string <code>S</code> is called good if none of the substrings of <code>S</code> of length <code>>= 2</code> are palindromic.</p>

<p>For e.g. <code>S = hello</code> is not good but <code>S = world</code> is good.</p>

<p>You are given a string <code>A</code> of length <code>N</code> (containing lowercase Latin letters only). Rearrange <code>A</code> to form a good string or determine it is not possible to do so.</p>

<p>Recall that a string is called palindromic if it reads the same backwards and forwards. For example, <code>noon</code> and <code>level</code> are palindromic strings.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of input contains a single integer <code>T</code> — the number of test cases. The description of the test cases follows.</p>
<p>The first line of each test case contains one integer <code>N</code> — the length of the string <code>A</code>.</p>
<p>The second line of each test case contains the string <code>A</code> of length <code>N</code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>For each test case, if it is possible to rearrange <code>A</code> to convert it into a good string, print <code>YES</code> in the first line and print the rearranged string in the second line. Otherwise, print <code>NO</code>.</p>
<p>You may print each character of <code>YES</code> and <code>NO</code> in uppercase or lowercase (for e.g. <code>yes</code>, <code>yEs</code>, <code>Yes</code> will be considered identical).</p>
<p>If there are multiple rearrangements of the string which are good, print any of them.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
4
5
world
5
hello
7
aaabbcc
6
pppppr
<strong>Output:</strong>
YES
world
YES
lehol
YES
abcabca
NO
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test case 1:</strong> <code>world</code> is already a good string.</p>
<p><strong>Test case 2:</strong> <code>hello</code> can be rearranged to form <code>lehol</code> which is good.</p>
<p><strong>Test case 3:</strong> <code>aaabbcc</code> can be rearranged to form <code>abcabca</code> which is good.</p>
<p><strong>Test case 4:</strong> It can be proven that none of the rearrangements of <code>pppppr</code> is good.</p>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= T <= 10<sup>5</sup></code></li>
	<li><code>1 <= N <= 10<sup>5</sup></code></li>
	<li>The string <code>A</code> contains lowercase Latin letters only</li>
	<li>The sum of <code>N</code> over all test cases does not exceed <code>2 * 10<sup>5</sup></code></li>
</ul>

## My Notes / Approach:
Difficulty:2279 or 5-star