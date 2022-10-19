## Python

Create a virtual environment and activate it:
```
python -m venv venv
venv\Scripts\activate.bat
```

Install pytest:
``` 
pip install pytest 
```
or:
``` 
pip install -r requirements
```

Run code for a Python file: 

```
python path/to/python/file
```


And to test **all** Python files, run this command:

```
pytest
```
in the project directory, in terminal.

To test one Python **test** file, run:
```
pytest <python_test_file>.py
```

## C++

Compile code:

```
cd path/to/cpp/file
g++ <cpp_file>.cpp -o <cpp_file>
```

And run:
```
.\<cpp_file>
```