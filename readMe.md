# ReadMe Software Engineering C++ Development task

This is the **readMe** file that is part of the solution I propose for the C++ Software Engineering task.


# Introduction

The service I developed stores important information from several sensors of a Formula One car with possible different sample sizes per second (e.g. 100 hz and 10 hz). The output that is generated is a display with a driver panel and a car panel that shows the data generated. In the future, additional panels such as tyre panel or fuel panel can be added.

# Build instructions
To develop the service I used a macOS Catalina version 10.15.7 as operating system. The processor is 2.3 GHz Dual-Core Intel Core i5. For development, I used Visual Studio Code. The service provides a **CMake** build script using minimum version 3.5.1. and clang 10.0.1 as compiler.
>To obtain the executable, first type 'cmake .' in the terminal, then 'make' such that the executable file main is created. 

## Files
The header files can be found in the folder 'include'. The '.cpp' files can be found in the folder 'src'. 


## Create and store data

The data generated is completely random from different distributions (e.g. Poisson, Uniform distribution) or from the random number generator in C++. To make the data a bit more realistic I added a sort functionality to sort data that increases over time (e.g. current lap). For a randomly chosen single datum the driver panel and car panel is generated. For the output the unique single datum is included as an identifier.

## Enlarge and sort functionality

For the class DataSet I included the functionality enlarge and sort in order to easily append data points. Note that, with the enlarge functionality dynamically allocating and deleting memory is ensured.

# Google test
For testing one could look at the following:
 >TEST(driverPanel, setName)
{
    GTEST_ASSERT_EQ(DriverPanel::setName("Pierre Gasly"), "Pierre Gasly");
}

Here we look at whether the function setName() from the class DriverPanel correctly defines the name of the driver in our application. This can be further implemented in **CMake** in the future.  


