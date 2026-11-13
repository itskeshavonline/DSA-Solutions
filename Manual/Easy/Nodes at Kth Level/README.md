# Nodes at Kth Level

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/learn/course/trees-new/TREESP02/problems/KTHNODE)

## Solved On
13 Nov 2026 at 09:59 pm

<p>Given an undirected connected tree with <code>N</code> nodes, numbered from <code>1</code> to <code>N</code>, rooted at node <code>1</code>, and a positive integer <code>K</code>. Print all the nodes at the level <code>K</code> from root node in sorted order.</p>

<p>For example, in the following tree, root node <code>1</code> is at level <code>0</code>. Similarly, nodes <code>2</code> and <code>4</code> are at level <code>1</code> from the root. Similarly, nodes <code>5</code>, <code>3</code>, <code>6</code> and <code>7</code> are at level <code>2</code> from the root node.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains two space-separated integers <code>N</code> and <code>K</code> — the number of vertices and level at which we need to find the nodes.</p>
<p>The next <code>N - 1</code> lines describe the edges. The <code>i<sup>th</sup></code> of these <code>N - 1</code> lines contains two space-separated integers <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>, denoting a bidirectional edge between <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Output on the single line, the space separated nodes (in sorted order) which are present at the <code>K<sup>th</sup></code> level from root node <code>1</code>.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
8 2
1 2
1 3
3 4
3 5
3 6
2 7
2 8
<strong>Output:</strong>
4 5 6 7 8
</pre>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N <= 10<sup>5</sup></code></li>
	<li><code>1 <= u<sub>i</sub>, v<sub>i</sub> <= N</code></li>
	<li><code>0 <= K <= maxLevelInTree</code></li>
</ul>

## My Notes / Approach:
Difficulty:  1350 or 1-star