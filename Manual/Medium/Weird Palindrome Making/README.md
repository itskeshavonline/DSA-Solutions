# Weird Palindrome Making

## Difficulty: Medium

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/MAKEPAL)

## Solved On
31 Oct 2026 at 09:56 am

<p>Naveej is from a tribe that speaks some weird language - their alphabet consists of <code>N</code> distinct characters. He has an array <code>A = [A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>]</code>, where <code>A<sub>i</sub></code> denotes the number of occurrences of the <code>i<sup>th</sup></code> character with him.</p>

<p>He wants to make a palindromic string using all the characters he has (every character he has must be used in this string).</p>

<p>In order to make this possible, he can perform the following operation:</p>
<ul>
	<li>Select an <code>i</code> (<code>1 <= i <= N</code>) and convert all occurrences of <code>i<sup>th</sup></code> alphabet to any other alphabet of his choice.</li>
</ul>

<p>Note that Naveej just wants to be able to make any palindrome, as long as every character is used. For example, if <code>N = 2</code> and <code>A = [2, 2]</code> and we consider the characters to be <code>a</code> and <code>b</code>, he can make both <code>abba</code> and <code>baab</code>, but <code>aba</code> is not allowed because it uses only <code>3</code> characters.</p>

<p>Find the minimum number of operations required such that Naveej can make a palindromic string using all the characters he has. It can be proven that there always exists at least one sequence of operations allowing for the formation of a palindrome.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of input contains a single integer <code>T</code>, denoting the number of test cases. The description of <code>T</code> test cases follows.</p>
<p>The first line of each test case contains a single integer <code>N</code> — the size of the alphabet.</p>
<p>The second line contains <code>N</code> space-separated integers: <code>A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub></code>, where <code>A<sub>i</sub></code> is the number of occurrences of the <code>i<sup>th</sup></code> character with Naveej.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>For each test case, output a single line containing one integer — the minimum number of operations required so that Naveej can make a palindromic string using all the characters he has.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
2
1
4
3
4 3 1
<strong>Output:</strong>
0
1
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test case 1:</strong> <code>N = 1</code>. Let the character be <code>a</code>. We can make the following palindromic string: <code>aaaa</code>.</p>
<p><strong>Test case 2:</strong> <code>N = 3</code>. Let the characters be <code>a</code>, <code>b</code>, <code>c</code>. It is initially not possible to make a palindrome with the given occurrences of the characters. We perform <code>1</code> operation: Convert all the occurrences of <code>b</code> to <code>c</code>. Then, we can make the following palindromic string: <code>acaccaca</code>.</p>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= T <= 1000</code></li>
	<li><code>1 <= N <= 2 * 10<sup>5</sup></code></li>
	<li><code>1 <= A<sub>i</sub> <= 10<sup>9</sup></code></li>
	<li>The sum of <code>N</code> over all test cases does not exceed <code>2 * 10<sup>5</sup></code></li>
</ul>

## My Notes / Approach:
Difficulty:  1486 or 2-star
