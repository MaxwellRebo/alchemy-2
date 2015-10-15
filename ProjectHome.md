Alchemy 2.0 is a software package for inference and learning in Markov logic networks (MLNs). As the name suggests, Alchemy 2.0 is based on the [Alchemy](http://alchemy.cs.washington.edu/) software package. The novelty in Alchemy 2.0 is that it includes several lifted probabilistic inference algorithms. Alchemy allows you to easily develop a wide range of AI applications, including:
  * Collective classification
  * Link prediction
  * Entity resolution
  * Social network modeling
  * Information extraction

If you are not already familiar with Markov logic, we recommend that you first read the paper [Unifying Logical and Statistical AI](http://www.cs.washington.edu/homes/pedrod/papers/aaai06c.pdf). If you want to understand how lifted inference algorithms operate, read the [Probabilistic Theorem Proving](http://www.hlt.utdallas.edu/~vgogate/papers/uai11-b.pdf) paper.

Alchemy 2.0 includes the following algorithms from the original Alchemy system:
  * Discriminative weight learning (Voted Perceptron, Conjugate Gradient, and Newton's Method)
  * Generative weight learning
  * Structure learning
  * propositional MAP/MPE inference (including memory efficient)
  * propositional and lazy Probabilistic inference algorithms: MC-SAT, Gibbs Sampling and Simulated Tempering
  * Lifted Belief propagation
  * Support for native and linked-in functions
  * Block inference and learning over variables with mutually exclusive and exhaustive values
  * EM (to handle ground atoms with unknown truth values during learning)
  * Specification of indivisible formulas (i.e. formulas that should not be broken up into separate clauses)
  * Support of continuous features and domains
  * Online inference
  * Decision Theory

The key new feature of Alchemy 2.0 is lifted inference algorithms (both exact and sampling-based). Specifically, it includes the following inference algorithms:
  * Probabilistic theorem proving (lifted weighted model counting)
  * Lifted importance sampling
  * Lifted Gibbs sampling

In the next full release, we plan to include:
  * Advanced lifted MCMC algorithms
  * Lifted MAP/MPE inference