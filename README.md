# Machine Learning with MNIST Dataset in C++

Welcome to the **Machine Learning with MNIST Dataset in C++** repository! This repository contains implementations and practice exercises that use the MNIST dataset to explore machine learning concepts in C++.

## Repository Overview

This repository is structured to help you:

- Understand and work with the MNIST dataset.
- Implement fundamental machine learning algorithms in C++.
- Practice coding techniques and problem-solving skills in the context of machine learning.

### Directory Structure

- **data/**: Contains the MNIST dataset files (if applicable).
- **src/**: Source code for machine learning implementations and experiments.
- **include/**: Header files used across the project.
- **tests/**: Unit tests to validate the functionality of the code.
- **build/**: Generated files during the build process (not included in the repository).

---

## Getting Started

### Prerequisites

To get started with this repository, you need the following:

- **C++ Compiler**: Preferably `g++` or `clang++` (supporting C++17 or newer).
- **CMake**: For managing the build process.
- **Git**: For cloning the repository.
- **MNIST Dataset**: Ensure you download the MNIST dataset if not already provided in the `data/` directory.

### Installation

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/kahdichienja/machine_learning_mnist_dataset_cpp_practice.git
   cd machine_learning_mnist_dataset_cpp_practice
   ```

2. **Build the Project**:

   Use CMake to configure and build the project.

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the Executable**:

   Navigate to the `build/` directory and execute the program:

   ```bash
   ./mnist_example
   ```

---

## Usage

### Loading the MNIST Dataset

The code includes functions to read and preprocess the MNIST dataset. Ensure the dataset is available in the `data/` directory or update the dataset path in the code.

### Implemented Features

The `src` directory in the `machine_learning_mnist_dataset_cpp_practice` repository contains the core C++ source files that implement various machine learning algorithms applied to the MNIST dataset. Here's an overview of the key components:

1. **Data Handling**:
   - **DataHandler.cc**: Manages the loading, processing, and splitting of the MNIST dataset into training, testing, and validation sets. It reads image and label data, normalizes feature vectors, and organizes data for model training and evaluation. 

2. **Data Representation**:
   - **data.cc**: Defines the `Data` class, representing individual data points. This class stores feature vectors, labels, and provides methods for setting and retrieving these attributes. It also includes functionality for normalizing data and calculating distances between data points. 

3. **K-Nearest Neighbors (KNN)**:
   - Implements the KNN algorithm for classifying handwritten digits. It calculates distances between data points to determine the nearest neighbors and predicts labels based on majority voting among neighbors. 

4. **K-Means Clustering**:
   - Implements the K-Means clustering algorithm, which groups similar data points together. This is useful for tasks like unsupervised learning and data analysis on the MNIST dataset. 

5. **Neural Network Components**:
   - Defines the `Layer` class, representing a layer in a neural network. It initializes neurons and manages the connections between layers, facilitating forward and backward propagation during training. 

6. **Common Utilities**:
   - Provides utility functions and common definitions used across different modules, aiding in tasks like mathematical computations and data manipulations.

These components work together to facilitate the training and evaluation of machine learning models on the MNIST dataset, providing a comprehensive practice environment for implementing and understanding machine learning algorithms in C++.

For detailed information, you can explore the source files directly in the repository: [mnist_ml/src](https://github.com/kahdichienja/machine_learning_mnist_dataset_cpp_practice/tree/main/mnist_ml/src). 

---

 

## License

This project is licensed under the MIT License.  

---

## Acknowledgments

- The MNIST dataset was developed by Yann LeCun, Corinna Cortes, and Christopher J.C. Burges.
- Thanks to the open-source community for inspiration and support.

---

Happy coding! 🎉