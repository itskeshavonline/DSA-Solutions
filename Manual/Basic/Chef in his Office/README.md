# Chef in his Office

## Difficulty: Basic

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/OFFICE)

## Solved On
12 Oct 2026 at 04:17 am

<p>Recently Chef joined a new company. In this company, the employees have to work for <code>X</code> hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for <code>Y</code> hours (<code>Y &lt; X</code>) on Friday. Saturdays and Sundays are holidays.</p>

<p>Determine the total number of working hours in one week.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line contains a single integer <code>T</code> — the number of test cases. Then the test cases follow.</p>
<p>The first and only line of each test case contains two space-separated integers <code>X</code> and <code>Y</code> — the number of working hours on each day from Monday to Thursday and the number of working hours on Friday respectively.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output the total number of working hours in one week.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
3
10 5
12 2
8 7
<strong>Output:</strong>
45
50
39
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Test case 1:</strong> The total number of working hours in a week are: <code>10 (Monday) + 10 (Tuesday) + 10 (Wednesday) + 10 (Thursday) + 5 (Friday) = 45</code>.</p>
<p><strong>Test case 2:</strong> The total number of working hours in a week are: <code>12 (Monday) + 12 (Tuesday) + 12 (Wednesday) + 12 (Thursday) + 2 (Friday) = 50</code>.</p>
<p><strong>Test case 3:</strong> The total number of working hours in a week are: <code>8 (Monday) + 8 (Tuesday) + 8 (Wednesday) + 8 (Thursday) + 7 (Friday) = 39</code>.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 100</code></li>
	<li><code>2 &lt;= X &lt;= 12</code></li>
	<li><code>1 &lt;= Y &lt; X</code></li>
</ul>

## My Notes / Approach:
difficulty - 532