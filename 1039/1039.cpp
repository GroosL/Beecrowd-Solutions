void solve() {
  int r1, x1, y1, r2, x2, y2;
  while (std::cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
    double d = std::sqrt(((x1-x2)*(x1-x2)) + ((y1-y2) * (y1-y2)));
    std::cout << (r1 >= d + r2 ? "RICO\n" : "MORTO\n");
  }
}
