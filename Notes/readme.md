# 🚀 C Programming Core Concepts & Tricks (Quick Cheatsheet)

## 1. Format Specifiers (`%` Symbols)
`printf` বা `scanf`-এ ডাটার টাইপ নির্দেশ করতে এগুলো ব্যবহৃত হয়:
* `%d` -> Integer (`int`)
* `%f` -> Float / Double (`float` / `double`)
* `%c` -> Character (`char`)
* `%s` -> String / Character Array (`char []`)
* `%zu` -> Memory Size (`sizeof` এর আউটপুটের জন্য)

---

## 2. Constants & Memory Check
* **`const` Keyword:** `const int AGE = 20;` (মানের পরিবর্তন রোধ করে)।
* **Macro (`#define`):** `#define PI 3.1416` (কোডের শুরুতে লিখতে হয়, কোনো `;` দেওয়া যাবে না)।
* **`sizeof()` Operator:** ডাটা টাইপ মেমোরিতে কত Bytes জায়গা নেয় তা মাপতে।

```c
printf("int size: %zu bytes\n", sizeof(int)); // Outputs: 4

---

## 3. Input & Memory Address (`scanf`)
`scanf` ব্যবহারের সময় ভেরিয়েবলের আগে অবশ্যই Address-of Operator (`&`) দিতে হয়। এটি সি-কে ভেরিয়েবলটির আসল RAM Memory Address নির্দেশ করে।

```c
int roll;
scanf("%d", &roll); // '&' is MANDATORY

## 4. Input Buffer Clearing Trick ⚠️ (CRITICAL)

#### 🎯 সমস্যা (Problem):
`scanf` দিয়ে ইনপুট নেওয়ার সময় যখন আমরা **Enter** চাপি, তখন মানটি ভেরিয়েবলে চলে যায় কিন্তু **Enter (`\n`)** টি মেমোরির **ইনপুট বাফারে (Input Buffer)** আটকে থাকে। 
এর ঠিক পরেই যদি `getchar()` ব্যবহার করা হয়, তবে সে ইউজারের নতুন ইনপুটের জন্য অপেক্ষা না করে বাফারে পড়ে থাকা ওই পুরোনো `\n` টিকেই ইনপুট হিসেবে ধরে নেয়!

#### 🛠️ সমাধান (Solution):
`scanf` এবং `getchar()`-এর ঠিক মাঝে নিচের লাইনটি বসিয়ে বাফারের ময়লা বা `\n` সাফা/ক্লিয়ার করে দিতে হয়:

```c
while (getchar() != '\n'); // Clears leftover '\n' from memory buffer

## 5. `getchar()` vs `putchar()`

* **`getchar()`:** কিবোর্ড থেকে একটি মাত্র ক্যারেক্টার গ্রহণ করে।
```c
char grade = getchar();

 * putchar(): স্ক্রিনে একটি মাত্র ক্যারেক্টার দ্রুত প্রিন্ট করে (printf-এর চেয়ে ফাস্ট)।

```C
putchar(grade);

## 6. Manual Compile & Run (Terminal Command)
Code Runner ছাড়া লিনাক্স টার্মিনালে সরাসরি রান করার ফাস্ট কমান্ড:

```bash
gcc filename.c -o app && ./app