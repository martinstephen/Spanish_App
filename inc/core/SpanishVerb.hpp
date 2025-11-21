class SpanishVerb {
public:
    SpanishVerb(std::string infinitive);
    void setStrategy(std::shared_ptr<ConjugationStrategy> strategy);
    std::string conjugate(Pronoun p) const;
private:
    std::string infinitive;
    std::shared_ptr<ConjugationStrategy> strategy;
};