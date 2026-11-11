# Breadth First Search

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/learn/course/trees-new/TREESP01/problems/BFS)

## Solved On
11 Nov 2026 at 03:25 pm

<p>Given a tree with <code>N</code> vertices and <code>N - 1</code> edges, rooted at node number <code>1</code>.</p>

<p>Output the nodes while traversing the tree in BFS order.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains single integer <code>N</code> — the number of vertices.</p>
<p>The next <code>N - 1</code> lines describe the edges. The <code>i<sup>th</sup></code> of these <code>N - 1</code> lines contains two space-separated integers <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>, denoting a bidirectional edge between <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Output <code>N</code> integers on the same line — the vertices of the given tree in BFS order.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
10
1 2
1 3
1 4
2 5
5 9
3 6
3 7
6 10
4 8
<strong>Output:</strong>
1 2 3 4 5 6 7 8 9 10
</pre>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N <= 10<sup>5</sup></code></li>
	<li><code>1 <= u<sub>i</sub>, v<sub>i</sub> <= N</code></li>
</ul>

## My Notes / Approach:
Difficulty: 1250 or 1-star