#include <iostream>
using namespace std;
/*
  Mental-state classifications summary
  (perception, belief, desire, intention, emotion, memory,
   sensory / propositional / intentional / conscious / occurrent distinctions,
   Brentano’s categories, etc.)

  Summarized with assistance from Grok (xAI) on 2026-11-20.
  Primary source: Wikipedia – “Mental state”
  https://en.wikipedia.org/wiki/Mental_state

  This is a paraphrase for personal reference only.
  Verify against the original article before relying on it.

  **Mental states** (or mental properties) are states of mind. They form a diverse class that includes **perception**, **pain/pleasure experience**, **belief**, **desire**, **intention**, **emotion**, and **memory** (among others).

### Main types / examples of mental states
The page lists a variety of types, including:
- Perception
- Bodily awareness
- Thought
- Belief
- Desire
- Motivation
- Intention
- Deliberation
- Decision
- Pleasure (pain/pleasure experience)
- Emotion
- Mood
- Imagination
- Memory

These can overlap, and some are more precisely contrasted with others (e.g., perception vs. bodily awareness; belief vs. desire).

### Key classifications / distinctions
Various overlapping classifications group mental phenomena according to these distinctions:

- **Sensory vs. non-sensory**: Sensory states involve sense impressions (e.g., visual perceptions, auditory impressions, bodily pains). Non-sensory states (e.g., thought, rational intuition, feeling of familiarity) lack sensory contents. Sensory states are sometimes equated with qualitative states (involving *qualia*—the subjective “what it is like” feel).

- **Propositional attitudes vs. non-propositional states**: Propositional attitudes are relations a subject has to a proposition (typically expressed with verbs like *believe*, *desire*, *fear*, or *hope* + a that-clause). Examples: believing that it will rain, desiring that something happen. Some states can be both sensory and propositional (e.g., perception).

- **Intentional vs. non-intentional**: Intentional states refer to or are about objects or states of affairs (e.g., beliefs and desires). Non-intentional states are claimed by some to include certain bodily experiences like pains and itches (though this is debated; intentionalism holds that all mental states are intentional). All propositional attitudes are generally accepted as intentional.

- **Conscious vs. unconscious**: Conscious states belong to phenomenal experience (there is a subjective feeling of having them). Unconscious states are part of the mind but lack this phenomenal dimension (e.g., a repressed desire). Some types (sensations/pains) can only be conscious; others (beliefs, desires) can be either.

- **Occurrent vs. standing (non-occurrent/dispositional)**: Occurrent states are active or causally efficacious in the mind right now. Standing states exist “in the background” and are currently inactive (e.g., many of one’s standing beliefs and desires while focused on something else, or most states during dreamless sleep). All conscious states are occurrent, but some unconscious states can also be occurrent.

- **Rational / irrational vs. arational**: Some states (beliefs, intentions) are rationally evaluable (rational or irrational depending on norms of rationality). Others (urges, dizziness, hunger) are arational—outside the domain of rationality.


*/
class perception {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class pleasure_pain{       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class experience {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class belief {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class desire {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class intention {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class emotion {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class memory {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
//Franz Brentano’s classification
class presentations {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class judgements {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

class phenomena_love_hate {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  belief myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
