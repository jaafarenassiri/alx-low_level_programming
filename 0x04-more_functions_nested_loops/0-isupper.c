int _isupper(int c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;  // The input corresponds to an uppercase letter.
  } else {
    return 0;  // The input does not correspond to an uppercase letter.
  }
}
