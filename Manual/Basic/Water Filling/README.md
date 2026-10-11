# Water Filling

## Difficulty: Basic

## Platform: Manual

## Problem Link
[View Problem](https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING)

## Solved On
12 Oct 2026 at 05:04 am

<p>Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.</p>

<p>You are given three integers - <code>B<sub>1</sub></code>, <code>B<sub>2</sub></code>, and <code>B<sub>3</sub></code>.</p>

<p>If <code>B<sub>1</sub> = 1</code>, it means that the first bottle is full.<br />
If <code>B<sub>1</sub> = 0</code>, it means that the first bottle is empty.</p>

<p>Similarly, <code>B<sub>2</sub></code> denotes whether the second bottle is full or empty, and <code>B<sub>3</sub></code> denotes it for the third bottle.</p>

<p>Output <code>"Water filling time"</code>, if Chef has to fill the bottles now. If not, output <code>"Not now"</code>.</p>

<p>&nbsp;</p>
<p><strong>Input</strong></p>
<p>The first line of input will contain a single integer <code>T</code>, denoting the number of test cases.</p>
<p>The only line of each test case contains three space-separated integers, <code>B<sub>1</sub></code>, <code>B<sub>2</sub></code>, and <code>B<sub>3</sub></code>.</p>

<p>&nbsp;</p>
<p><strong>Output</strong></p>
<p>For each test case, output on a new line, either <code>"Water filling time"</code>, or <code>"Not now"</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong>
5
0 0 0
1 1 1
1 1 0
0 1 0
0 1 1
<strong>Output:</strong>
Water filling time
Not now
Not now
Water filling time
Not now
</pre>

<p><strong>Explanation:</strong></p>
<p><strong>Testcase 1:</strong> The inputs are <code>0, 0, 0</code>. So all three bottles are empty. Since at least two bottles are empty, it is <code>"Water filling time"</code>.</p>
<p><strong>Testcase 2:</strong> The inputs are <code>1, 1, 1</code>. So all three bottles are full. Since it is not the case that at least two bottles are empty, it is <code>"Not now"</code>.</p>
<p><strong>Testcase 3:</strong> The inputs are <code>1, 1, 0</code>. So only one bottle is empty. Since it is not the case that at least two bottles are empty, it is <code>"Not now"</code>.</p>
<p><strong>Testcase 4:</strong> The inputs are <code>0, 1, 0</code>. So two bottles are empty. Since at least two bottles are empty, it is <code>"Water filling time"</code>.</p>
<p><strong>Testcase 5:</strong> The inputs are <code>0, 1, 1</code>. So only one bottle is empty. Since it is not the case that at least two bottles are empty, it is <code>"Not now"</code>.</p>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= T &lt;= 1000</code></li>
	<li><code>B<sub>i</sub></code> is either <code>0</code> or <code>1</code></li>
</ul>

## My Notes / Approach:
difficulty - 541