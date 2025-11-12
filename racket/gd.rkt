#lang racket

(define (f x y)
  (+ (* x x) (* y y)))

(define (gd xin yin lr numit)
  (define xhis '(xin))
  (define yhis '(yin))
  (for ([i (in-range numit)])
    (define x (last xhis))
    (define y (last yhis))
    (define xnew (- x (* lr (* (* (f x y) 2) x))))
    (define ynew (- y (* lr (* (* (f x y) 2) x))))
    (set! xhis (append xhis (list xnew)))
    (set! yhis (append yhis (list ynew)))
  )
  (list xhis yhis))

(gd -2 2 0.0001 20000)

 ;; this is a progam that runs my gradient from python but i think the partial ders are wrong 
