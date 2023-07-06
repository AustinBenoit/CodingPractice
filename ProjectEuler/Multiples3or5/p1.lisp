(defun m3or5sum (max)
 (let ((sum 0))
   (loop for i from 1 to max
         do
           (if (or (equal (mod i 5) 0) (equal (mod i 3) 0) )
                 (setf sum (+ sum i)))
 sum ))
