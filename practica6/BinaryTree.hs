module BinaryTree where


data Tree t = Empty | Leaf t | Branch t (Tree t) (Tree t) deriving Show

empty :: Tree t
leaf :: t -> Tree t
tree :: t -> Tree t -> Tree t -> Tree t
size :: Tree t -> Int

empty = Empty
leaf x = Leaf x
tree x lc rc = Branch x lc rc
size Empty = 0
size (Leaf _) = 1
size (Branch _ lc rc) = size lc + size rc + 1

add :: (Ord t) => Tree t -> t -> Tree t
add Empty x = Leaf x
add (Leaf y) x
   | x < y = Branch y Leaf x Empty
   | x => y = Branch y Empty Leaf x
add (Branch y lc rc) x
   | x < y = Branch y (add lc x) rc
   | x => y = Branch y lc (add rc x)

build :: Ord t => [t] -> Tree t

--Instanciar show
--instance (Show t) => Show (Tree t)
--   where
--      show= 
--         where  
--            ShowAux=