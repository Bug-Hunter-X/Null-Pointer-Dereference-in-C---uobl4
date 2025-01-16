int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; 
  } else {
    //Handle the case where ptr is null.  For example:
    std::cerr << "Error: Null pointer dereference avoided." << std::endl;
  }
  return 0;
}