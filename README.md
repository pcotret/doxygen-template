# doxygen-template - Quick start

Run the wizard:

```bas
doyxwizard
```

Or create a new Doxyfile:

````bas
doxygen -g Doxyfile
````

Compile it:

```bas
doxygen Doxyfile
```

## Generating the CHM file (for Windows)

Download the [HTML Help Workshop](https://www.microsoft.com/en-us/download/details.aspx?id=21138) and add the location of `hhc.exe`to your PATH.

Then:

```bas
hhc index.hhp
```

