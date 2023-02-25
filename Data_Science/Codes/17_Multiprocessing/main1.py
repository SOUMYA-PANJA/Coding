import multiprocessing

def test():
    print("Multiprocessing")

if __name__ == "__main__":
    m = multiprocessing.Process(target = test)
    print("Hello")
    m.start()
    m.join()