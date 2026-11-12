# Height of the tree

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/learn/course/trees-new/TREESP02/problems/TREELVL)

## Solved On
13 Nov 2026 at 02:51 am

<p>Given an undirected connected tree with <code>N</code> nodes, numbered from <code>1</code> to <code>N</code>, and rooted at node <code>1</code>, find the height of the tree.</p>

<p>For example, in the following tree, the height is <code>2</code>. (<strong>Note:</strong> The height of a tree is the number of edges on the longest downward path between its root node and any of the leaves.)</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains a single integer <code>N</code> — the number of vertices.</p>
<p>The next <code>N - 1</code> lines describe the edges. The <code>i<sup>th</sup></code> of these <code>N - 1</code> lines contains two space-separated integers <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>, denoting a bidirectional edge between <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Output on the single line, the depth of the given tree.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
8
1 2
1 3
3 4
3 5
3 6
2 7
2 8
<strong>Output:</strong>
2
</pre>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N <= 10<sup>5</sup></code></li>
	<li><code>1 <= u<sub>i</sub>, v<sub>i</sub> <= N</code></li>
</ul>

## My Notes / Approach:
Difficulty:  1350 or 1-star