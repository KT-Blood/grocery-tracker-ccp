# 📊 Grocery Tracker (C++)

## 📌 Overview  
This project is a C++ program that tracks how often grocery items are purchased using data from an input file. It uses a map to store item frequencies and allows the user to search for items, view all item counts, and display a histogram of the data.

---

## ⚙️ Features  
- Search for a specific grocery item and display how many times it appears  
- Print a list of all grocery items with their frequencies  
- Display a histogram using asterisks (`*`) to visualize item counts  
- Creates a backup file (`frequency.dat`) to store processed data  

---

## 🧠 Concepts Used  
- C++ classes and object-oriented design  
- `map` for storing key-value pairs (item name and frequency)  
- File input/output (`ifstream`, `ofstream`)  
- Functions and modular programming  
- Menu-driven program structure  

---

## ▶️ How to Run  
1. Compile the program using a C++ compiler (Visual Studio or g++)  
2. Ensure the input file (`CS210_Project_Three_Input_File.txt`) is in the same directory  
3. Run the program  
4. Follow the menu prompts to interact with the tracker  

---

## 📈 What I Learned  
Through this project, I learned how to:
- Use maps to efficiently store and organize data  
- Read from and write to files in C++  
- Build a menu-driven application  
- Structure code using classes and functions for readability  

---

## 🔧 Future Improvements  
- Add input validation for user search entries  
- Make searches case-insensitive  
- Improve user interface formatting  
- Allow dynamic file selection  

---
## Reflection

### Summarize the project and what problem it was solving.
This project is a C++ grocery tracking program that reads grocery item data from an input file and counts how many times each item appears. The program solves the problem of manually tracking item frequency by organizing the data and displaying it through search results, a full frequency list, and a histogram.

### What did you do particularly well?
I think I did particularly well organizing the program into a class and separate functions. This made the code easier to read and helped keep each part of the program focused on one task, such as loading the file, searching for an item, or printing the histogram.

### Where could you enhance your code?
I could enhance my code by making the search feature case-insensitive and adding more input validation. These improvements would make the program more user-friendly and help prevent errors if the user types an item name differently than it appears in the file.

### Which pieces of code were most challenging, and how did you overcome this?
The most challenging part was working with file input and storing the item counts in a map. I overcame this by breaking the program into smaller steps, testing each menu option, and reviewing examples of file handling and maps in C++.

### What skills from this project will be transferable?
The most transferable skills from this project are file handling, using data structures like maps, writing functions, and organizing code with classes. These skills can be used in many future programming projects that involve reading data, storing information, and displaying results.

### How did you make this program maintainable, readable, and adaptable?
I made the program maintainable by separating the logic into functions and using clear function names. I also used comments to explain important parts of the code. This makes it easier to update the program later, such as adding better search options or improving the menu.

## 👤 Author  
Kayleen Blood  
Computer Science Student.
