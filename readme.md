# 🗺️ C প্রোগ্রামিং রোডম্যাপ — লেভেল ভিত্তিক প্র্যাকটিক্যাল গাইড

> কোনো ডেডলাইন নেই। নিজের গতিতে, যতটুকু ভালো লাগে ততটুকু এগোবেন। প্রতিটা লেভেলের পাশে "সময়" শুধু একটা ধারণা দেওয়ার জন্য — কোনো বাধ্যবাধকতা না।

---

## 🔹 Level 0 — একদম শুরু থেকে (Setup ও বেসিক সিনট্যাক্স)
**সময়ের ধারণা:** ১-২ সপ্তাহ

**যা শিখবেন:**
- C কী, কম্পাইলার কী, কীভাবে ইনস্টল ও রান করতে হয় (`gcc filename.c -o app && ./app`)
- একটা C প্রোগ্রামের বেসিক স্ট্রাকচার — `#include`, `main()`, `{ }`, `return 0;`
- Comment লেখা (`//` ও `/* */`)
- Character set, token, keyword, identifier — এগুলো আসলে কী (পরিচিতি লেভেলে)
- Data types (`int`, `char`, `float`, `double`) ও `sizeof()` দিয়ে মেমোরি সাইজ বোঝা
- Variable declare ও assign করা
- Constant বানানো — `const` কিওয়ার্ড ও `#define` ম্যাক্রো
- বেসিক Input/Output — `printf()`, `scanf()`, আর ফরম্যাট স্পেসিফায়ার (`%d`, `%f`, `%c`, `%s`)

**কী বানাতে পারবেন:**
- ক্লাসিক "Hello, World!" প্রোগ্রাম
- ইউজারের নাম ও বয়স ইনপুট নিয়ে সেটা প্রিন্ট করা প্রোগ্রাম
- দুইটা সংখ্যা ইনপুট নিয়ে যোগফল/গুণফল বের করা প্রোগ্রাম
- সাধারণ ইউনিট কনভার্টার (যেমন সেলসিয়াস → ফারেনহাইট, একটাই ফর্মুলা দিয়ে)

---

## 🔹 Level 1 — Operators ও Control Flow
**সময়ের ধারণা:** ১-২ সপ্তাহ

**যা শিখবেন:**
- Arithmetic, relational, logical, ternary operator (আপনার নোটে C vs JS পার্থক্য নিয়ে যা লিখেছেন, সেটার প্র্যাকটিক্যাল প্রয়োগ)
- `if-else`, `switch-case`
- `for`, `while`, `do-while` লুপ, আর `break`/`continue`

**কী বানাতে পারবেন:**
- মেনু-ভিত্তিক ক্যালকুলেটর (switch-case দিয়ে +,-,*,/ সিলেক্ট করা যায়)
- জোড়-বিজোড়, প্রাইম নাম্বার চেকার
- FizzBuzz
- স্টার/পিরামিড প্যাটার্ন প্রিন্টার (nested loop প্র্যাকটিসের জন্য চমৎকার)
- সংখ্যা অনুমান খেলা (Guess the Number)

---

## 🔹 Level 2 — Array ও String Handling
**সময়ের ধারণা:** ২ সপ্তাহ

**যা শিখবেন:**
- 1D ও 2D array
- `<string.h>` এর ফাংশন: `strlen`, `strcpy`, `strcat`, `strcmp`
- Array-তে সার্চ ও সর্ট (Linear Search, Bubble Sort)

**কী বানাতে পারবেন:**
- স্টুডেন্টদের নাম্বার নিয়ে গড়/সর্বোচ্চ/সর্বনিম্ন বের করা প্রোগ্রাম
- সিজার সাইফার (Caesar Cipher) — এনক্রিপশন/ডিক্রিপশন
- 2D array দিয়ে Tic-Tac-Toe (দুই প্লেয়ার, বোর্ড প্রিন্ট)
- একটা string palindrome কিনা চেক করা প্রোগ্রাম

---

## 🔹 Level 3 — Functions গভীরভাবে ও Recursion
**সময়ের ধারণা:** ১ সপ্তাহ

**যা শিখবেন:**
- Parameter passing (pass by value), function scope
- Recursion (নিজেকে নিজে কল করা ফাংশন)
- Storage classes: `static`, `extern` (বেসিক ধারণা)

**কী বানাতে পারবেন:**
- Factorial, Fibonacci (recursion দিয়ে)
- GCD/LCM বের করা (Euclidean algorithm)
- একটা সিম্পল Maze/Path যেখানে recursion দিয়ে সব সম্ভাব্য পথ বের করা যায়

---

## 🔹 Level 4 — Pointer (C-এর হৃদয়)
**সময়ের ধারণা:** ২-৩ সপ্তাহ (সবচেয়ে গুরুত্বপূর্ণ, তাড়াহুড়ো না করাই ভালো)

**যা শিখবেন:**
- Pointer basics, pointer arithmetic
- Array ও pointer-এর সম্পর্ক (`arr[i]` আসলে `*(arr + i)`)
- Pointer দিয়ে string handle করা
- Pointer to pointer (`**`)
- Function pointer (বেসিক পরিচিতি)

**কী বানাতে পারবেন:**
- নিজের হাতে `my_strlen()`, `my_strcpy()` লেখা (pointer দিয়ে, লাইব্রেরি ফাংশন ছাড়া)
- `swap()` ফাংশন pointer দিয়ে (pass by value vs pass by reference বোঝা)
- একটা array-কে function-এ পাঠিয়ে মডিফাই করা প্রোগ্রাম

---

## 🔹 Level 5 — Dynamic Memory Allocation
**সময়ের ধারণা:** ১ সপ্তাহ

**যা শিখবেন:**
- `malloc()`, `calloc()`, `realloc()`, `free()`
- Memory leak কী, কেন `free()` করা জরুরি

**কী বানাতে পারবেন:**
- Runtime-এ সাইজ ঠিক করা যায় এমন Dynamic Array (ইউজার যত সংখ্যা চায় তত জায়গা)
- সাইজ পরিবর্তনযোগ্য (resizable) একটা লিস্ট

---

## 🔹 Level 6 — Structure, Union, Enum, typedef
**সময়ের ধারণা:** ২ সপ্তাহ

**যা শিখবেন:**
- `struct`, nested struct, array of struct
- Structure pointer (`->` অপারেটর)
- `union`, `enum`, `typedef`

**কী বানাতে পারবেন:**
- স্টুডেন্ট ম্যানেজমেন্ট সিস্টেম (নাম, রোল, নাম্বার — array of struct দিয়ে)
- ছোট Contact Book (নাম, ফোন নাম্বার সংরক্ষণ)
- Employee Record System (add/search/display)

---

## 🔹 Level 7 — File Handling
**সময়ের ধারণা:** ১-২ সপ্তাহ

**যা শিখবেন:**
- `fopen`, `fclose`, `fprintf`, `fscanf`, `fread`, `fwrite`
- Text ফাইলে ডেটা সেভ ও লোড করা

**কী বানাতে পারবেন:**
- আগের "স্টুডেন্ট ম্যানেজমেন্ট সিস্টেম"-কে ফাইলে সেভ/লোড করার ফিচার যোগ করা (প্রোগ্রাম বন্ধ করলেও ডেটা হারাবে না)
- একটা সিম্পল নোট-রাখার CLI অ্যাপ (আপনার দরসের নোট রাখার জন্যও ব্যবহার করতে পারেন!)
- To-Do List যেটা ফাইলে সেভ থাকে

---

## 🔹 Level 8 — বেসিক Data Structures (Pointer + Struct একসাথে)
**সময়ের ধারণা:** ৩-৪ সপ্তাহ

**যা শিখবেন:**
- Linked List (Singly)
- Stack, Queue (array বা linked list দিয়ে)

**কী বানাতে পারবেন:**
- Linked List দিয়ে To-Do List (ডাইনামিকভাবে আইটেম যোগ/মুছে ফেলা)
- Stack দিয়ে ব্র্যাকেট ম্যাচিং চেকার `(), {}, []`
- Stack দিয়ে Postfix Expression Evaluator
- Queue দিয়ে সিম্পল টিকিট/সিরিয়াল সিস্টেম সিমুলেশন

---

## 🔹 Level 9 — বোনাস টপিকস (ঐচ্ছিক কিন্তু কাজে লাগবে)

- **Preprocessor:** `#ifdef`, `#ifndef`, conditional compilation
- **Multi-file programming:** `.h` হেডার ফাইল বানিয়ে প্রোজেক্ট ভাগ করা
- **Command line arguments:** `argc`, `argv`
- **Bitwise operators:** `&`, `|`, `^`, `<<`, `>>`

**কী বানাতে পারবেন:** আগের যেকোনো প্রোজেক্টকে একাধিক ফাইলে ভেঙে (যেমন `main.c`, `student.h`, `student.c`) প্রফেশনাল স্ট্রাকচারে রিরাইট করা।

---

## 🏆 Capstone Projects (সব কিছু একসাথে প্রয়োগ)

এই লেভেলে পৌঁছালে নিচের যেকোনো একটা প্রোজেক্ট C-তে সব শেখা একসাথে ব্যবহার করার সুযোগ দেবে:

1. **লাইব্রেরি/দরস নোট ম্যানেজমেন্ট সিস্টেম** — struct + file handling + linked list মিলিয়ে বই/নোট যোগ, খোঁজা, ডিলিট করা যায় এমন একটা CLI টুল
2. **টেক্সট-বেসড অ্যাডভেঞ্চার গেম** — struct দিয়ে রুম/ক্যারেক্টার, ফাইলে সেভ/লোড ফিচার সহ
3. **হিফজ রিভিশন ট্র্যাকার** — কোন সূরা কবে রিভিশন দিয়েছেন, কবে আবার দিতে হবে (spaced repetition লজিক), ফাইলে সেভ থাকবে
4. **সিম্পল CSV-ভিত্তিক মিনি ডেটাবেস** — CRUD (Create, Read, Update, Delete) অপারেশন কমান্ড-লাইন থেকে

---

## 📌 কীভাবে এগোবেন

- একবারে সব মুখস্থ করার দরকার নেই — প্রতিটা লেভেল শেষে অন্তত একটা "বানাতে পারবেন" লিস্টের প্রজেক্ট নিজে হাতে লিখে ফেলুন
- আটকে গেলে ছোট প্রশ্ন করুন, পুরো সমাধান কপি না করে নিজে বোঝার চেষ্টা করুন
- Level 4 (Pointer) সবচেয়ে গুরুত্বপূর্ণ ও একটু কঠিন — এখানে সময় বেশি দিলেও সমস্যা নেই, বরং ভালো