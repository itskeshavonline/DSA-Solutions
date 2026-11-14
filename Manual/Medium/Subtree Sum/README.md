# Subtree Sum

## Difficulty: Medium

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/learn/course/trees-new/TREESP02/problems/SUBTREESUM)

## Solved On
14 Nov 2026 at 02:11 pm

<p>Given an undirected connected tree with <code>N</code> nodes, numbered from <code>1</code> to <code>N</code>, and rooted at node <code>1</code>, find the subtree sum of each node <code>i</code>. (<strong>Note:</strong> Subtree of any node <code>i</code> contains all nodes which are descendants of it including node <code>i</code>.)</p>

<p>For example, in the following tree, subtree sum of each nodes (from <code>1</code> to <code>N = 7</code>) are: <code>28</code>, <code>16</code>, <code>3</code>, <code>11</code>, <code>5</code>, <code>6</code> and <code>7</code>.</p>

<p> </p>
<p><strong>Input</strong></p>
<p>The first line of the input contains a single integer <code>N</code> — the number of nodes.</p>
<p>The next <code>N - 1</code> lines describe the edges. The <code>i<sup>th</sup></code> of these <code>N - 1</code> lines contains two space-separated integers <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>, denoting a bidirectional edge between <code>u<sub>i</sub></code> and <code>v<sub>i</sub></code>.</p>

<p> </p>
<p><strong>Output</strong></p>
<p>Output one single line <code>N</code> space separated values, the subtree sum of each subtrees rooted at each node from <code>1</code> to <code>N</code>.</p>

<p> </p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
7
1 2
1 4
2 5
2 3
2 6
4 7
<strong>Output:</strong>
28 16 3 11 5 6 7
</pre>

<p> </p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 <= N <= 10<sup>5</sup></code></li>
	<li><code>1 <= u<sub>i</sub>, v<sub>i</sub> <= N</code></li>
</ul>

## My Notes / Approach:
Difficulty:  1450 or 2-star