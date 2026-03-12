template <typename T>
ArrayStack<T>::ArrayStack(int i) {
    // TODO
    maxSize = i;
    length = 0;
    buffer = new T[maxSize];
    //testing
}

template <typename T>
ArrayStack<T>::ArrayStack(const ArrayStack<T>& copyObj) {
    copy(copyObj);
}

template <typename T>
ArrayStack<T>& ArrayStack<T>::operator=(const ArrayStack<T>& rightObj) {
    if (this != &rightObj) {
        clear();
        copy(rightObj);
    }
    return *this;
}

template <typename T>
ArrayStack<T>::~ArrayStack() {
    clear();
}

template <typename T>
void ArrayStack<T>::clear() {
    // TODO
    delete[] buffer;
    buffer = nullptr;
    length = 0;
    maxSize = 0;
    //testing
}

template <typename T>
void ArrayStack<T>::copy(const ArrayStack<T>& copyObj) {
    // TODO
    maxSize = copyObj.maxSize;
    length = copyObj.length;

    buffer = new T[maxSize];

    for (int i = 0; i < length; i++) {
        buffer[i] = copyObj.buffer[i];
    }
    //testing
}

template <typename T>
int ArrayStack<T>::getLength() const {
    return this->length;
}

template <typename T>
int ArrayStack<T>::getMaxSize() const {
    return maxSize;
}

template <typename T>
bool ArrayStack<T>::isEmpty() const {
    return this->length == 0;
}

template <typename T>
bool ArrayStack<T>::isFull() const {
    return this->length == maxSize;
}

template <typename T>
T ArrayStack<T>::peek() const {
    // TODO
    if (isEmpty()) {
        throw runtime_error("Stack is empty");
    }
    return buffer[length - 1];
    //testing
}

template <typename T>
void ArrayStack<T>::pop() {
    // TODO
    if (isEmpty()) {
        throw runtime_error("Stack is empty");
    }
    length--;
    //testing
}

template <typename T>
void ArrayStack<T>::push(const T& elem) {
    // TODO
    if (isFull()) {
        throw runtime_error("Stack is full");
    }

    buffer[length] = elem;
    length++;
}

template <typename T>
void ArrayStack<T>::rotate(typename Stack<T>::Direction dir) {
    // TODO
    if (isEmpty()) {
        throw runtime_error("Stack is empty");
    }

    if (dir == Stack<T>::LEFT) { //manually changed ai made "dir == Stack<T>::Direction::UP" to "dir == Stack<T>::LEFT" 
        T temp = buffer[length - 1]; //added temp
        for (int i = length - 1; i > 0; i--) {
            buffer[i] = buffer[i - 1];
        }
        buffer[0] = temp;
    } else {
        T temp = buffer[0];
        for (int i = 0; i < length - 1; i++) {
            buffer[i] = buffer[i + 1];
        }
        buffer[length - 1] = temp;
    }
    //testing (vscode ai made)
    
}

template <typename T>
ostream& operator<<(ostream& outStream, const ArrayStack<T>& myObj) {
    if (myObj.isEmpty()) {
        outStream << "Stack is empty, no elements to display.\n";
    }
    else {
        for (int i = myObj.length - 1; i >= 0; i--) {
            outStream << (i == myObj.length - 1 ? "top\t" : "\t")
                      << myObj.buffer[i] << endl;
        }
    }

    return outStream;
}
