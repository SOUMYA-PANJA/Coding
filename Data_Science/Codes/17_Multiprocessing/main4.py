import multiprocessing

def square(index, value):
    print(index)
    value[index] = value[index]**2
    print(list(value))

if __name__ == '__main__':
    arr = multiprocessing.Array('i', [2, 3, 4, 5, 6, 7, 8])
    process = []
    for i in range(7):
        m = multiprocessing.Process(target = square, args = (i, arr))
        process.append(m)
        m.start()
    for m in process:
        m.join()
    print(list(arr))