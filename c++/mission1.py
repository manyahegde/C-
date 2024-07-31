def main():
    def sumofsquares(l):
        n=len(l)
        sum=0
        if l:
            if l[-1]>0:
                sum+=l[-1]**2
            return sum+sumofsquares(l[:-1])
        return sum

    def read_input_lines(n, arr=[]):
        if n==0:
            return arr
        return read_input_lines(n-1, arr+[input()])

    def process_inputs(N, inputs, results=[]):
        if N==0:
            return results
        X, l=inputs[0], list(map(int, inputs[1].split()))
        return process_inputs(N-1, inputs[2:], results+[sumofsquares(l)])

    N=int(input())
    inputs=read_input_lines(2 * N)
    results=process_inputs(N, inputs)
     
    print('\n'.join(map(str, results)))

if __name__=="__main__":
        main()