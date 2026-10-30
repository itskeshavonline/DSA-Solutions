# Query over Matrix

## Difficulty: Hard

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/problems/QMAXTRIX)

## Solved On
30 Oct 2026 at 12:21 pm

<p>There is a <code>N * N</code> square matrix. You have been given <code>N</code> specifications, one per row of the matrix. The <code>i<sup>th</sup></code> specification is represented by a pair of integers <code>L[i]</code> and <code>R[i]</code>, denoting that all elements belonging to columns between <code>L[i]</code> and <code>R[i]</code> (both inclusive) in row <code>i</code> are <code>1</code>, while the rest of the elements of the <code>i<sup>th</sup></code> row are <code>0</code>.</p>

<p>Now you will be given an integer <code>Q</code>, followed by <code>Q</code> operations: Each query is described by two integers <code>x</code> and <code>y</code>, which asks what will be the parity of the sum of the matrix if the <code>x<sup>th</sup></code> row and the <code>y<sup>th</sup></code> column are removed from the matrix.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains an integer <code>N</code>, followed by <code>N</code> lines: each containing a pair of integers. The <code>i<sup>th</sup></code> pair of integers denotes the value of <code>L[i]</code> and <code>R[i]</code>.</p>
<p>The next line contains the value of <code>Q</code>, and the following <code>Q</code> lines contain the queries.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Print <code>Q</code> lines, each containing a single character <code>"E"</code> or <code>"O"</code>, indicating whether the sum is even or odd.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
3
1 3
2 2
1 3
2
2 2
3 2
<strong>Output:</strong>
E
E
</pre>

<p><strong>Explanation:</strong></p>
<p>The given matrix is:</p>
<p><code>1 1 1</code><br />
<code>0 1 0</code><br />
<code>1 1 1</code></p>
<p>It's easy to see that the sum is even in both the queries.</p>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N, Q <= 10<sup>5</sup></code></li>
	<li><code>1 <= L[i] <= R[i] <= N</code></li>
	<li><code>1 <= x, y <= N</code></li>
</ul>

## My Notes / Approach:
difficuly - 1898 or 4-star